
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct nfsd_fault_inject_op {int file; } ;


 unsigned int FUNC_0 (struct nfsd_fault_inject_op*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,int,int ,struct nfsd_fault_inject_op*,int *) ;
 int VAR_4 ;
 struct nfsd_fault_inject_op* VAR_5 ;

void FUNC_3(void)
{
 unsigned int VAR_6;
 struct nfsd_fault_inject_op *VAR_7;
 umode_t VAR_8 = VAR_0 | VAR_1 | VAR_2;

 VAR_3 = FUNC_1("nfsd", ((void*)0));

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++) {
  VAR_7 = &VAR_5[VAR_6];
  FUNC_2(VAR_7->file, VAR_8, VAR_3, VAR_7, &VAR_4);
 }
}
