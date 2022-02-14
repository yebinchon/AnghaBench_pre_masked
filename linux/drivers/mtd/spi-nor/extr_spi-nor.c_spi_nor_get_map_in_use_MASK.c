
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct spi_nor {int addr_width; int read_dummy; int read_opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int const* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const) ;
 int const VAR_3 ;
 int const VAR_4 ;
 int FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int,int ) ;
 int FUNC_7 (struct spi_nor*,int,int,int*) ;
 int FUNC_8 (struct spi_nor*,int const) ;
 int FUNC_9 (struct spi_nor*,int const) ;

__attribute__((used)) static const u32 *FUNC_10(struct spi_nor *VAR_5, const u32 *VAR_6,
      u8 VAR_7)
{
 const u32 *VAR_8;
 u8 *VAR_9;
 u32 VAR_10;
 int VAR_11;
 u8 VAR_12;
 u8 VAR_13, VAR_14, VAR_15;
 u8 VAR_16, VAR_17;


 VAR_9 = FUNC_6(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_13 = VAR_5->addr_width;
 VAR_15 = VAR_5->read_dummy;
 VAR_14 = VAR_5->read_opcode;

 VAR_17 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12 += 2) {
  if (VAR_6[VAR_12] & VAR_4)
   break;

  VAR_16 = FUNC_2(VAR_6[VAR_12]);
  VAR_5->addr_width = FUNC_8(VAR_5, VAR_6[VAR_12]);
  VAR_5->read_dummy = FUNC_9(VAR_5, VAR_6[VAR_12]);
  VAR_5->read_opcode = FUNC_1(VAR_6[VAR_12]);
  VAR_10 = VAR_6[VAR_12 + 1];

  VAR_11 = FUNC_7(VAR_5, VAR_10, 1, VAR_9);
  if (VAR_11) {
   VAR_8 = FUNC_0(VAR_11);
   goto out;
  }





  VAR_17 = VAR_17 << 1 | !!(*VAR_9 & VAR_16);
 }
 VAR_8 = FUNC_0(-VAR_0);
 while (VAR_12 < VAR_7) {
  if (FUNC_3(VAR_6[VAR_12]) == VAR_17) {
   VAR_8 = VAR_6 + VAR_12;
   break;
  }






  if (VAR_6[VAR_12] & VAR_3)
   break;


  VAR_12 += FUNC_4(VAR_6[VAR_12]) + 1;
 }


out:
 FUNC_5(VAR_9);
 VAR_5->addr_width = VAR_13;
 VAR_5->read_dummy = VAR_15;
 VAR_5->read_opcode = VAR_14;
 return VAR_8;
}
