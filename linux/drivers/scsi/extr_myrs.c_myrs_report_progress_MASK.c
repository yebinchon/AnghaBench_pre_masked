
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myrs_hba {int host; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,unsigned short,unsigned char*,int) ;

__attribute__((used)) static void FUNC_1(struct myrs_hba *VAR_1, unsigned short VAR_2,
  unsigned char *VAR_3, unsigned long VAR_4,
  unsigned long VAR_5)
{
 FUNC_0(VAR_0, VAR_1->host,
       "Logical Drive %d: %s in Progress: %d%% completed\n",
       VAR_2, VAR_3,
       (100 * (int)(VAR_4 >> 7)) / (int)(VAR_5 >> 7));
}
