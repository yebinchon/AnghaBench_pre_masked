
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct dentry*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct dentry *VAR_6)
{
 umode_t VAR_7 = FUNC_2(VAR_6)->i_mode;
 int VAR_8 = 0;


 if (FUNC_3(VAR_7 & VAR_4))
  VAR_8 = VAR_1;





 if (FUNC_3((VAR_7 & VAR_3) && (VAR_7 & VAR_5)))
  VAR_8 |= VAR_0;

 if (FUNC_3(VAR_8 && !FUNC_1(VAR_2) && FUNC_0(VAR_7)))
  return VAR_8;

 return 0;
}
