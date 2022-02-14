
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_standard {unsigned int index; } ;
typedef int buf ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct v4l2_standard* FUNC_1 (unsigned int,int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct v4l2_standard*,int) ;
 unsigned int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int,char*,unsigned int,...) ;
 int VAR_4 ;
 int* VAR_5 ;

struct v4l2_standard *FUNC_6(unsigned int *VAR_6,
        v4l2_std_id VAR_7)
{
 unsigned int VAR_8 = 0;
 unsigned int VAR_9,VAR_10,VAR_11;
 v4l2_std_id VAR_12,VAR_13,VAR_14;
 struct v4l2_standard *VAR_15;

 if (VAR_4 & VAR_3) {
  char VAR_16[100];
  VAR_10 = FUNC_4(VAR_16,sizeof(VAR_16),VAR_7);
  FUNC_5(
   VAR_3,"Mapping standards mask=0x%x (%.*s)",
   (int)VAR_7,VAR_10,VAR_16);
 }

 *VAR_6 = 0;
 VAR_8 = 0;
 VAR_14 = 0;
 for (VAR_12 = 1, VAR_13 = VAR_7; VAR_13; VAR_12 <<= 1) {
  if (!(VAR_12 & VAR_13)) continue;
  VAR_13 &= ~VAR_12;
  if (FUNC_2(VAR_12)) {
   VAR_8++;
   continue;
  }
  VAR_14 |= VAR_12;
 }

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_5); VAR_11++) {
  if ((VAR_7 & VAR_5[VAR_11]) == VAR_5[VAR_11]) VAR_8++;
 }


 VAR_14 &= ~VAR_0;

 if (VAR_14) {
  char VAR_17[100];
  VAR_10 = FUNC_4(VAR_17,sizeof(VAR_17),VAR_14);
  FUNC_5(
   VAR_2,
   "***WARNING*** Failed to classify the following standard(s): %.*s",
   VAR_10,VAR_17);
 }

 FUNC_5(VAR_3,"Setting up %u unique standard(s)",
     VAR_8);
 if (!VAR_8) return ((void*)0);

 VAR_15 = FUNC_1(VAR_8, sizeof(struct v4l2_standard),
     VAR_1);
 if (!VAR_15)
  return ((void*)0);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  VAR_15[VAR_9].index = VAR_9;

 VAR_9 = 0;


 for (VAR_11 = 0; (VAR_11 < FUNC_0(VAR_5)) && (VAR_9 < VAR_8);
      VAR_11++) {
  if (!(VAR_7 & VAR_5[VAR_11])) continue;
  if (FUNC_3(VAR_15+VAR_9,VAR_5[VAR_11])) VAR_9++;
 }

 for (VAR_12 = 1, VAR_13 = VAR_7; VAR_13 && (VAR_9 < VAR_8); VAR_12 <<= 1) {
  if (!(VAR_12 & VAR_13)) continue;
  VAR_13 &= ~VAR_12;
  if (!FUNC_3(VAR_15+VAR_9,VAR_12)) continue;
  VAR_9++;
 }

 *VAR_6 = VAR_8;
 return VAR_15;
}
