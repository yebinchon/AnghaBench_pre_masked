
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pti_masterchannel {int channel; int master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (struct pti_masterchannel*,int *,int ) ;
 int FUNC_3 (int *,int,char const*,int ,int,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void FUNC_6(struct pti_masterchannel *VAR_5,
          const char *VAR_6)
{




 char VAR_7[VAR_2];
 struct pti_masterchannel VAR_8 = {.master = VAR_1,
           .channel = 0};
 const char *VAR_9;
 const char *VAR_10 = "%3d %3d %s";
 u8 VAR_11[VAR_0];

 if (!VAR_6) {
  if (!FUNC_1())
   FUNC_0(VAR_7, VAR_3);
  else
   FUNC_5(VAR_7, "Interrupt", VAR_2);


  VAR_7[VAR_2-1] = 0;
  VAR_9 = VAR_7;
 } else {
  VAR_9 = VAR_6;
 }

 VAR_8.channel = VAR_4;
 VAR_4 = (VAR_4 + 1) & 0x7f;

 FUNC_3(VAR_11, VAR_0, VAR_10, VAR_5->master,
  VAR_5->channel, VAR_9);
 FUNC_2(&VAR_8, VAR_11, FUNC_4(VAR_11));
}
