
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct sta2x11_vip {int std; int decoder; int format; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,...) ;
 int VAR_8 ;
 struct sta2x11_vip* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_9, void *VAR_10, v4l2_std_id VAR_11)
{
 struct sta2x11_vip *VAR_12 = FUNC_1(VAR_9);





 if (VAR_11 == VAR_2) {
  FUNC_0(VAR_12->decoder, VAR_8, VAR_6, &VAR_11);
  if (VAR_11 == VAR_3)
   return -VAR_0;
 }

 if (VAR_12->std != VAR_11) {
  VAR_12->std = VAR_11;
  if (VAR_1 & VAR_11)
   VAR_12->format = VAR_5[0];
  else
   VAR_12->format = VAR_4[0];
 }

 return FUNC_0(VAR_12->decoder, VAR_8, VAR_7, VAR_11);
}
