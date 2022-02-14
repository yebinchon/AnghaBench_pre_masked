
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_rds_gen {int picode; int pty; int mono_stereo; int art_head; int compressed; int dyn_pty; int tp; int ta; int ms; int radiotext; int psname; scalar_t__ use_rbds; } ;


 int FUNC_0 (int ,int,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*,int) ;

void FUNC_2(struct vivid_rds_gen *VAR_0, unsigned VAR_1,
     bool VAR_2)
{

 if (VAR_0->use_rbds) {
  VAR_0->picode = 0x2e75;
  VAR_0->pty = VAR_2 ? 29 : 2;
 } else {
  VAR_0->picode = 0x8088;
  VAR_0->pty = VAR_2 ? 16 : 3;
 }
 VAR_0->mono_stereo = 1;
 VAR_0->art_head = 0;
 VAR_0->compressed = 0;
 VAR_0->dyn_pty = 0;
 VAR_0->tp = 1;
 VAR_0->ta = VAR_2;
 VAR_0->ms = 1;
 FUNC_0(VAR_0->psname, sizeof(VAR_0->psname), "%6d.%1d",
   VAR_1 / 16, ((VAR_1 & 0xf) * 10) / 16);
 if (VAR_2)
  FUNC_1(VAR_0->radiotext,
   " The Radio Data System can switch between different Radio Texts ",
   sizeof(VAR_0->radiotext));
 else
  FUNC_1(VAR_0->radiotext,
   "An example of Radio Text as transmitted by the Radio Data System",
   sizeof(VAR_0->radiotext));
}
