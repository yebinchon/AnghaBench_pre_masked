
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dasd_device {int flags; } ;
struct dasd_block {struct dasd_device* base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dasd_device*,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct dasd_block *VAR_4)
{
 struct dasd_device *VAR_5;

 VAR_5 = VAR_4->base;
 if (!FUNC_1(VAR_0))
  return -VAR_3;

 if (FUNC_2(VAR_1, &VAR_5->flags))
  FUNC_0(VAR_2, VAR_5, "%s", "abortall flag unset");

 return 0;
}
