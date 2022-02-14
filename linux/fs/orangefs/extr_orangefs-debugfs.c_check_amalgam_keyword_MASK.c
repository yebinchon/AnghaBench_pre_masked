
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct client_debug_mask {scalar_t__ mask1; scalar_t__ mask2; } ;
typedef scalar_t__ __u64 ;
struct TYPE_4__ {scalar_t__ mask1; scalar_t__ mask2; } ;
struct TYPE_3__ {scalar_t__ mask_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_9, int VAR_10)
{
 __u64 *VAR_11;
 struct client_debug_mask *VAR_12;
 int VAR_13 = VAR_7 - 1;
 int VAR_14 = 0;

 if (VAR_10) {
  VAR_12 = (struct client_debug_mask *) VAR_9;

  if ((VAR_12->mask1 == VAR_2[VAR_3].mask1) &&
      (VAR_12->mask2 == VAR_2[VAR_3].mask2)) {
   FUNC_0(VAR_4, VAR_0);
   VAR_14 = 1;
   goto out;
  }

  if ((VAR_12->mask1 == VAR_2[VAR_5].mask1) &&
      (VAR_12->mask2 == VAR_2[VAR_5].mask2)) {
   FUNC_0(VAR_4, VAR_1);
   VAR_14 = 1;
   goto out;
  }

 } else {
  VAR_11 = (__u64 *) VAR_9;

  if (*VAR_11 >= VAR_8[VAR_13].mask_val) {
   FUNC_0(VAR_6, VAR_0);
   VAR_14 = 1;
   goto out;
  }
 }

out:

 return VAR_14;
}
