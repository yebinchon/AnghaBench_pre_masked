
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SMB2_sess_data {int * func; int result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct SMB2_sess_data *VAR_2)
{
 FUNC_0(VAR_1, "Kerberos negotiated but upcall support disabled!\n");
 VAR_2->result = -VAR_0;
 VAR_2->func = ((void*)0);
}
