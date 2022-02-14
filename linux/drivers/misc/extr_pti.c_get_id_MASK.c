
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pti_masterchannel {int master; int channel; } ;


 int VAR_0 ;
 int FUNC_0 (struct pti_masterchannel*) ;
 struct pti_masterchannel* FUNC_1 (int,int ) ;
 int FUNC_2 (struct pti_masterchannel*,char const*) ;

__attribute__((used)) static struct pti_masterchannel *FUNC_3(u8 *VAR_1,
     int VAR_2,
     int VAR_3,
     const char *VAR_4)
{
 struct pti_masterchannel *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_5 = FUNC_1(sizeof(struct pti_masterchannel), VAR_0);
 if (VAR_5 == ((void*)0))
  return ((void*)0);


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  if (VAR_1[VAR_6] != 0xff)
   break;
 if (VAR_6 == VAR_2) {
  FUNC_0(VAR_5);
  return ((void*)0);
 }

 VAR_8 = 0x80;
 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  if ((VAR_1[VAR_6] & VAR_8) == 0)
   break;
  VAR_8 >>= 1;
 }


 VAR_1[VAR_6] |= VAR_8;
 VAR_5->master = VAR_3;
 VAR_5->channel = ((VAR_6 & 0xf)<<3) + VAR_7;

 FUNC_2(VAR_5, VAR_4);
 return VAR_5;
}
