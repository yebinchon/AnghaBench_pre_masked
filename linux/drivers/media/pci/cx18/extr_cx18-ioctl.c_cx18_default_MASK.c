
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct file {int dummy; } ;
struct cx18 {int dummy; } ;
struct TYPE_2__ {struct cx18* cx; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (struct cx18*,int ,int ,int ,int) ;
 TYPE_1__* FUNC_1 (void*) ;
 int VAR_4 ;

__attribute__((used)) static long FUNC_2(struct file *VAR_5, void *VAR_6, bool VAR_7,
    unsigned int VAR_8, void *VAR_9)
{
 struct cx18 *VAR_10 = FUNC_1(VAR_6)->cx;

 switch (VAR_8) {
 case 128: {
  u32 VAR_11 = *(u32 *)VAR_9;

  if ((VAR_11 == 0) || (VAR_11 & 0x01))
   FUNC_0(VAR_10, VAR_1, VAR_3, VAR_4,
         (u32) VAR_0);
  break;
 }

 default:
  return -VAR_2;
 }
 return 0;
}
