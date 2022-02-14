
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_vf_bulletin_content {int crc; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pf_vf_bulletin_content*) ;

void FUNC_1(struct pf_vf_bulletin_content *VAR_2,
    bool VAR_3)
{



 VAR_2->length = VAR_3 ? VAR_1 :
       VAR_0;
 VAR_2->crc = FUNC_0(VAR_2);
}
