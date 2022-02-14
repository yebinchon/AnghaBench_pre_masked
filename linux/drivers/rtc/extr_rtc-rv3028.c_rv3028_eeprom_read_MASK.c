
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (void*,int ,int*) ;
 int FUNC_1 (void*,int ,int,int,int ,int ) ;
 int FUNC_2 (void*,int ,int,int) ;
 int FUNC_3 (void*,int ,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_10, unsigned int VAR_11, void *VAR_12,
         size_t VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 u8 *VAR_20 = VAR_12;

 VAR_18 = FUNC_0(VAR_10, VAR_0, &VAR_15);
 if (VAR_18)
  return VAR_18;

 if (!(VAR_15 & VAR_1)) {
  VAR_18 = FUNC_2(VAR_10, VAR_0,
      VAR_1, VAR_1);
  if (VAR_18)
   return VAR_18;

  VAR_18 = FUNC_1(VAR_10, VAR_8, VAR_14,
            !(VAR_14 & VAR_9),
            VAR_2,
            VAR_3);
  if (VAR_18)
   goto restore_eerd;
 }

 for (VAR_17 = 0; VAR_17 < VAR_13; VAR_17++) {
  VAR_18 = FUNC_3(VAR_10, VAR_4, VAR_11 + VAR_17);
  if (VAR_18)
   goto restore_eerd;

  VAR_18 = FUNC_3(VAR_10, VAR_5, 0x0);
  if (VAR_18)
   goto restore_eerd;

  VAR_18 = FUNC_3(VAR_10, VAR_5,
       VAR_6);
  if (VAR_18)
   goto restore_eerd;

  VAR_18 = FUNC_1(VAR_10, VAR_8, VAR_14,
            !(VAR_14 & VAR_9),
            VAR_2,
            VAR_3);
  if (VAR_18)
   goto restore_eerd;

  VAR_18 = FUNC_0(VAR_10, VAR_7, &VAR_16);
  if (VAR_18)
   goto restore_eerd;
  VAR_20[VAR_17] = VAR_16;
 }

restore_eerd:
 if (!(VAR_15 & VAR_1))
 {
  VAR_19 = FUNC_2(VAR_10, VAR_0, VAR_1,
      0);
  if (VAR_19 && !VAR_18)
   VAR_18 = VAR_19;
 }

 return VAR_18;
}
