
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_tuner {int capability; scalar_t__ audmode; int rxsubchans; } ;
struct cx88_core {int astat; int tvaudio; int use_nicam; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int FUNC_0 (struct cx88_core*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char const* const,char const* const,int ) ;

void FUNC_3(struct cx88_core *VAR_14, struct v4l2_tuner *VAR_15)
{
 static const char * const VAR_16[] = { "stereo", "dual mono",
       "mono", "sap" };
 static const char * const VAR_17[] = { "no pilot", "pilot c1",
       "pilot c2", "?" };
 u32 VAR_18, VAR_19, VAR_20;

 VAR_18 = FUNC_1(VAR_1);
 VAR_19 = VAR_18 & 0x03;
 VAR_20 = (VAR_18 >> 2) & 0x03;

 if (VAR_14->astat != VAR_18)
  FUNC_2("AUD_STATUS: 0x%x [%s/%s] ctl=%s\n",
   VAR_18, VAR_16[VAR_19], VAR_17[VAR_20],
   VAR_13[FUNC_1(VAR_0) & 63]);
 VAR_14->astat = VAR_18;

 VAR_15->capability = VAR_6 | VAR_5 |
     VAR_3 | VAR_4;
 VAR_15->rxsubchans = VAR_2;
 VAR_15->audmode = VAR_8;

 switch (VAR_19) {
 case 0:
  VAR_15->audmode = VAR_10;
  break;
 case 1:
  VAR_15->audmode = VAR_7;
  break;
 case 2:
  VAR_15->audmode = VAR_8;
  break;
 case 3:
  VAR_15->audmode = VAR_9;
  break;
 }

 switch (VAR_14->tvaudio) {
 case 137:
 case 138:
 case 136:
 case 129:
 case 135:
  if (!VAR_14->use_nicam) {
   VAR_15->rxsubchans = FUNC_0(VAR_14);
   break;
  }
  break;
 case 128:
 case 133:
 case 130:
 case 131:
 case 134:
 case 132:

  break;
 }


 if (VAR_15->rxsubchans == VAR_2) {
  VAR_15->rxsubchans = VAR_11;




  if (VAR_15->audmode == VAR_10)
   VAR_15->rxsubchans |= VAR_12;
 }
}
