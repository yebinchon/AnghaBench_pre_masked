
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u_char ;
struct tmio_nand {scalar_t__ fcr; } ;
struct nand_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tmio_nand* FUNC_0 (int ) ;
 int FUNC_1 (struct nand_chip*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct nand_chip *VAR_4, const u_char *VAR_5,
       u_char *VAR_6)
{
 struct tmio_nand *VAR_7 = FUNC_0(FUNC_1(VAR_4));
 unsigned int VAR_8;

 FUNC_3(VAR_3, VAR_7->fcr + VAR_1);

 VAR_8 = FUNC_2(VAR_7->fcr + VAR_0);
 VAR_6[1] = VAR_8;
 VAR_6[0] = VAR_8 >> 8;
 VAR_8 = FUNC_2(VAR_7->fcr + VAR_0);
 VAR_6[2] = VAR_8;
 VAR_6[4] = VAR_8 >> 8;
 VAR_8 = FUNC_2(VAR_7->fcr + VAR_0);
 VAR_6[3] = VAR_8;
 VAR_6[5] = VAR_8 >> 8;

 FUNC_3(VAR_2, VAR_7->fcr + VAR_1);
 return 0;
}
