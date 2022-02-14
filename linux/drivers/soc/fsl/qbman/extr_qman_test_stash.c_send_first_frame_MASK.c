
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qm_fd {int dummy; } ;
typedef int fd ;
struct TYPE_2__ {scalar_t__ processor_id; int tx; scalar_t__ tx_mixer; int addr; scalar_t__* frame_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct qm_fd*,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct qm_fd*,int ) ;
 int FUNC_5 (struct qm_fd*,int) ;
 int FUNC_6 (int *,struct qm_fd*) ;
 scalar_t__ FUNC_7 () ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_8(void *VAR_4)
{
 u32 *VAR_5 = VAR_3->frame_ptr;
 u32 VAR_6 = VAR_1;
 int VAR_7, VAR_8;
 struct qm_fd VAR_9;

 if (VAR_3->processor_id != FUNC_7()) {
  VAR_8 = -VAR_0;
  goto failed;
 }
 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 FUNC_4(&VAR_9, VAR_3->addr);
 FUNC_5(&VAR_9, VAR_2 * 4);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++, VAR_5++) {
  if (*VAR_5 != VAR_6) {
   VAR_8 = -VAR_0;
   FUNC_2("corrupt frame data");
   goto failed;
  }
  *VAR_5 ^= VAR_3->tx_mixer;
  VAR_6 = FUNC_0(VAR_6);
 }
 FUNC_3("Sending first frame\n");
 VAR_8 = FUNC_6(&VAR_3->tx, &VAR_9);
 if (VAR_8) {
  FUNC_2("qman_enqueue() failed");
  goto failed;
 }

 return 0;
failed:
 return VAR_8;
}
