
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airo_info {scalar_t__ networks; } ;
typedef int BSSListElement ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct airo_info *VAR_3)
{
 if (VAR_3->networks)
  return 0;

 VAR_3->networks = FUNC_1(VAR_0, sizeof(BSSListElement),
          VAR_2);
 if (!VAR_3->networks) {
  FUNC_0("", "Out of memory allocating beacons");
  return -VAR_1;
 }

 return 0;
}
