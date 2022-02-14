
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1251 {int* fw; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (size_t,int ) ;
 int FUNC_2 (int*,int*,size_t) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct wl1251*,int,int*,size_t) ;
 int FUNC_6 (struct wl1251*,int ) ;
 int FUNC_7 (struct wl1251*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct wl1251 *VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 size_t VAR_15, VAR_16;
 u8 *VAR_17, *VAR_18;



 FUNC_3(VAR_2, "chip id before fw upload: 0x%x",
       FUNC_6(VAR_11, VAR_0));


 VAR_15 = (VAR_11->fw[4] << 24) | (VAR_11->fw[5] << 16) |
  (VAR_11->fw[6] << 8) | (VAR_11->fw[7]);

 FUNC_3(VAR_2, "fw_data_len %zu chunk_size %d", VAR_15,
  VAR_1);

 if ((VAR_15 % 4) != 0) {
  FUNC_4("firmware length not multiple of four");
  return -VAR_3;
 }

 VAR_18 = FUNC_1(VAR_1, VAR_6);
 if (!VAR_18) {
  FUNC_4("allocation for firmware upload chunk failed");
  return -VAR_4;
 }

 FUNC_7(VAR_11, VAR_8,
        VAR_7,
        VAR_10,
        VAR_9);


 VAR_13 = 0;
 VAR_14 = VAR_7;

 while (VAR_13 < VAR_15 / VAR_1) {

  VAR_12 = VAR_8 +
   (VAR_13 + 2) * VAR_1;
  if (VAR_12 > VAR_14) {
   VAR_12 = VAR_8 +
    VAR_13 * VAR_1;
   VAR_14 = VAR_13 * VAR_1 +
    VAR_7;
   FUNC_7(VAR_11,
          VAR_12,
          VAR_7,
          VAR_10,
          VAR_9);
  }


  VAR_12 = VAR_8 + VAR_13 * VAR_1;
  VAR_17 = VAR_11->fw + VAR_5 + VAR_13 * VAR_1;
  FUNC_3(VAR_2, "uploading fw chunk 0x%p to 0x%x",
        VAR_17, VAR_12);


  VAR_16 = VAR_1;
  FUNC_2(VAR_18, VAR_17, VAR_16);
  FUNC_5(VAR_11, VAR_12, VAR_18, VAR_16);

  VAR_13++;
 }


 VAR_12 = VAR_8 + VAR_13 * VAR_1;
 VAR_17 = VAR_11->fw + VAR_5 + VAR_13 * VAR_1;


 VAR_16 = VAR_15 % VAR_1;
 FUNC_2(VAR_18, VAR_17, VAR_16);

 FUNC_3(VAR_2, "uploading fw last chunk (%zu B) 0x%p to 0x%x",
       VAR_16, VAR_17, VAR_12);
 FUNC_5(VAR_11, VAR_12, VAR_18, VAR_16);

 FUNC_0(VAR_18);

 return 0;
}
