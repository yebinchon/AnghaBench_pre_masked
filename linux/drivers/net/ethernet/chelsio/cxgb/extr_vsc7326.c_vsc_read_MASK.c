
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mac_lock; } ;
typedef TYPE_1__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int,int*) ;

__attribute__((used)) static void FUNC_4(adapter_t *VAR_2, u32 VAR_3, u32 *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 int VAR_8;

 FUNC_1(&VAR_2->mac_lock);
 FUNC_3(VAR_2, (VAR_3 << 2) + 4, &VAR_6);
 VAR_8 = 0;
 do {
  FUNC_3(VAR_2, (VAR_1 << 2) + 4, &VAR_6);
  FUNC_3(VAR_2, VAR_1 << 2, &VAR_7);
  VAR_5 = (VAR_7 << 16) | VAR_6;
  VAR_8++;
 } while (((VAR_5 & 1) == 0) && (VAR_8 < 50));
 if (VAR_8 == 50)
  FUNC_0("Invalid tpi read from MAC, breaking loop.\n");

 FUNC_3(VAR_2, (VAR_0 << 2) + 4, &VAR_6);
 FUNC_3(VAR_2, VAR_0 << 2, &VAR_7);

 *VAR_4 = (VAR_7 << 16) | VAR_6;




 FUNC_2(&VAR_2->mac_lock);
}
