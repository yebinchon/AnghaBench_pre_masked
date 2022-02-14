
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ses_device {int page1_num_types; unsigned char* page10; int page10_len; unsigned char* page1_types; } ;
struct scsi_device {int dummy; } ;
struct enclosure_device {struct enclosure_component* component; struct ses_device* scratch; } ;
struct enclosure_component {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct enclosure_component*) ;
 struct enclosure_component* FUNC_1 (struct enclosure_device*,int ,unsigned char,char*) ;
 int FUNC_2 (struct enclosure_component*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int,int ) ;
 int FUNC_5 (struct enclosure_component*,unsigned char*) ;
 scalar_t__ FUNC_6 (struct scsi_device*,int,unsigned char*,int) ;

__attribute__((used)) static void FUNC_7(struct enclosure_device *VAR_8,
           struct scsi_device *VAR_9,
           int VAR_10)
{
 u32 VAR_11;
 unsigned char *VAR_12 = ((void*)0), *VAR_13, *VAR_14, *VAR_15 = ((void*)0);
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 struct ses_device *VAR_21 = VAR_8->scratch;
 int VAR_22 = VAR_21->page1_num_types;
 unsigned char *VAR_23 = FUNC_4(VAR_7, VAR_6);

 if (!VAR_23)
  goto simple_populate;


 if (VAR_21->page10)
  FUNC_6(VAR_9, 10, VAR_21->page10, VAR_21->page10_len);

 VAR_11 = FUNC_6(VAR_9, 7, VAR_23, VAR_7);
 if (VAR_11)
  goto simple_populate;

 VAR_18 = VAR_19 = (VAR_23[2] << 8) + VAR_23[3] + 4;

 VAR_12 = FUNC_4(VAR_19 + 1, VAR_6);
 if (!VAR_12)
  goto simple_populate;
 VAR_11 = FUNC_6(VAR_9, 7, VAR_12, VAR_19);
 if (VAR_11) {
 simple_populate:
  FUNC_3(VAR_12);
  VAR_12 = ((void*)0);
  VAR_14 = ((void*)0);
  VAR_19 = 0;
  VAR_18 = 0;
 } else {
  VAR_14 = VAR_12 + 8;
  VAR_19 = (VAR_14[2] << 8) + VAR_14[3];

  VAR_14 += VAR_19 + 4;
 }
 if (VAR_21->page10)
  VAR_15 = VAR_21->page10 + 8;
 VAR_13 = VAR_21->page1_types;
 VAR_20 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_22; VAR_16++, VAR_13 += 4) {
  for (VAR_17 = 0; VAR_17 < VAR_13[1]; VAR_17++) {
   char *VAR_24 = ((void*)0);
   struct enclosure_component *VAR_25;

   if (VAR_14) {
    if (VAR_14 >= VAR_12 + VAR_18) {
     VAR_14 = ((void*)0);
    } else {
     VAR_19 = (VAR_14[2] << 8) + VAR_14[3];
     VAR_14 += 4;


     VAR_14[VAR_19] = '\0';
     VAR_24 = VAR_14;
    }
   }
   if (VAR_13[0] == VAR_2 ||
       VAR_13[0] == VAR_0) {

    if (VAR_10)
     VAR_25 = FUNC_1(
      VAR_8,
      VAR_20++,
      VAR_13[0],
      VAR_24);
    else
     VAR_25 = &VAR_8->component[VAR_20++];

    if (!FUNC_0(VAR_25)) {
     if (VAR_15)
      FUNC_5(
       VAR_25,
       VAR_15);
     if (VAR_10)
      FUNC_2(
       VAR_25);
    }
   }
   if (VAR_14)
    VAR_14 += VAR_19;

   if (VAR_15 &&

       (VAR_13[0] == VAR_2 ||
        VAR_13[0] == VAR_0 ||
        VAR_13[0] == VAR_3 ||

        VAR_13[0] == VAR_5 ||
        VAR_13[0] == VAR_4 ||
        VAR_13[0] == VAR_1))
    VAR_15 += VAR_15[1] + 2;

  }
 }
 FUNC_3(VAR_12);
 FUNC_3(VAR_23);
}
