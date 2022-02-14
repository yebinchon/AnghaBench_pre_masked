
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;
struct sym_device {int dummy; } ;
typedef int Tekram_nvram ;


 int FUNC_0 (struct sym_device*,int ) ;
 int FUNC_1 (struct sym_device*,int ,int) ;
 int FUNC_2 (struct sym_device*,int *,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct sym_device *VAR_2, Tekram_nvram *VAR_3)
{
 u_char VAR_4, VAR_5;
 u_char VAR_6, VAR_7;
 int VAR_8;


 VAR_7 = FUNC_0(VAR_2, VAR_1);
 VAR_6 = FUNC_0(VAR_2, VAR_0);



 VAR_5 = VAR_7 & 0xe9;
 FUNC_1(VAR_2, VAR_1, VAR_5);
 VAR_4 = (VAR_6 & 0xe9) | 0x09;
 FUNC_1(VAR_2, VAR_0, VAR_4);


 VAR_8 = FUNC_2(VAR_2, (u_short *) VAR_3,
    sizeof(*VAR_3) / sizeof(short), &VAR_5);


 FUNC_1(VAR_2, VAR_0, VAR_6);
 FUNC_1(VAR_2, VAR_1, VAR_7);

 return VAR_8;
}
