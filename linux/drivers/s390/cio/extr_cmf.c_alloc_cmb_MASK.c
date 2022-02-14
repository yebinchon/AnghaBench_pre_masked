
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmb_data {int size; struct cmb_data* last_block; } ;
struct cmb {int dummy; } ;
struct ccw_device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int num_channels; int lock; struct cmb* mem; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (struct ccw_device*,struct cmb_data*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (struct cmb*,int ) ;
 int FUNC_4 (unsigned long,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct cmb_data*) ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct cmb*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct ccw_device *VAR_5)
{
 int VAR_6;
 struct cmb *VAR_7;
 ssize_t VAR_8;
 struct cmb_data *VAR_9;


 VAR_9 = FUNC_7(sizeof(struct cmb_data), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->last_block = FUNC_7(sizeof(struct cmb), VAR_3);
 if (!VAR_9->last_block) {
  FUNC_6(VAR_9);
  return -VAR_1;
 }
 VAR_9->size = sizeof(struct cmb);
 FUNC_10(&VAR_4.lock);

 if (!VAR_4.mem) {

  VAR_8 = sizeof(struct cmb) * VAR_4.num_channels;
  FUNC_0(!FUNC_8(&VAR_4.list));

  FUNC_11(&VAR_4.lock);
  VAR_7 = (void*)FUNC_1(VAR_3 | VAR_2,
     FUNC_5(VAR_8));
  FUNC_10(&VAR_4.lock);

  if (VAR_4.mem) {

   FUNC_4((unsigned long)VAR_7, FUNC_5(VAR_8));
  } else if (!VAR_7) {

   VAR_6 = -VAR_1;
   goto out;
  } else {

   FUNC_9(VAR_7, 0, VAR_8);
   VAR_4.mem = VAR_7;
   FUNC_3(VAR_4.mem, VAR_0);
  }
 }


 VAR_6 = FUNC_2(VAR_5, VAR_9);
out:
 FUNC_11(&VAR_4.lock);
 if (VAR_6) {
  FUNC_6(VAR_9->last_block);
  FUNC_6(VAR_9);
 }
 return VAR_6;
}
