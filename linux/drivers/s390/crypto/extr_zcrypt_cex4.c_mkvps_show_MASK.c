
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zcrypt_queue {int online; TYPE_1__* queue; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cca_info {char new_mk_state; char cur_mk_state; char old_mk_state; int old_mkvp; int cur_mkvp; int new_mkvp; } ;
typedef int ssize_t ;
typedef int ci ;
struct TYPE_4__ {struct zcrypt_queue* private; } ;
struct TYPE_3__ {int qid; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,struct cca_info*,int ) ;
 int FUNC_3 (struct cca_info*,int ,int) ;
 int FUNC_4 (char*,scalar_t__,char*,...) ;
 TYPE_2__* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 int VAR_4 = 0;
 struct cca_info VAR_5;
 struct zcrypt_queue *VAR_6 = FUNC_5(VAR_1)->private;
 static const char * const VAR_7[] = { "invalid", "valid" };
 static const char * const VAR_8[] = { "empty", "partial", "full" };

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));

 FUNC_2(FUNC_0(VAR_6->queue->qid),
       FUNC_1(VAR_6->queue->qid),
       &VAR_5, VAR_6->online);

 if (VAR_5.new_mk_state >= '1' && VAR_5.new_mk_state <= '3')
  VAR_4 = FUNC_4(VAR_3, VAR_0, "AES NEW: %s 0x%016llx\n",
        VAR_8[VAR_5.new_mk_state - '1'], VAR_5.new_mkvp);
 else
  VAR_4 = FUNC_4(VAR_3, VAR_0, "AES NEW: - -\n");

 if (VAR_5.cur_mk_state >= '1' && VAR_5.cur_mk_state <= '2')
  VAR_4 += FUNC_4(VAR_3 + VAR_4, VAR_0 - VAR_4, "AES CUR: %s 0x%016llx\n",
         VAR_7[VAR_5.cur_mk_state - '1'], VAR_5.cur_mkvp);
 else
  VAR_4 += FUNC_4(VAR_3 + VAR_4, VAR_0 - VAR_4, "AES CUR: - -\n");

 if (VAR_5.old_mk_state >= '1' && VAR_5.old_mk_state <= '2')
  VAR_4 += FUNC_4(VAR_3 + VAR_4, VAR_0 - VAR_4, "AES OLD: %s 0x%016llx\n",
         VAR_7[VAR_5.old_mk_state - '1'], VAR_5.old_mkvp);
 else
  VAR_4 += FUNC_4(VAR_3 + VAR_4, VAR_0 - VAR_4, "AES OLD: - -\n");

 return VAR_4;
}
