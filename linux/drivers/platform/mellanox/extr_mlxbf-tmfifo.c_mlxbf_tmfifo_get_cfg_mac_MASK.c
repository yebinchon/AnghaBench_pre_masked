
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ efi_status_t ;
typedef int efi_guid_t ;
struct TYPE_2__ {scalar_t__ (* get_variable ) (int ,int *,int *,unsigned long*,int *) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_1 (int ,int *,int *,unsigned long*,int *) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_6)
{
 efi_guid_t VAR_7 = VAR_0;
 unsigned long VAR_8 = VAR_2;
 u8 VAR_9[VAR_2];
 efi_status_t VAR_10;

 VAR_10 = VAR_3.get_variable(VAR_4, &VAR_7, ((void*)0), &VAR_8, VAR_9);
 if (VAR_10 == VAR_1 && VAR_8 == VAR_2)
  FUNC_0(VAR_6, VAR_9);
 else
  FUNC_0(VAR_6, VAR_5);
}
