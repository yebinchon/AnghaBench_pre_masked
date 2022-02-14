
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2255_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s2255_dev*,int,char*,unsigned char,...) ;
 int FUNC_1 (struct s2255_dev*,int ,int ,int ,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct s2255_dev *VAR_2)
{
 int VAR_3;
 int VAR_4;
 unsigned char VAR_5[64];
 VAR_4 = FUNC_1(VAR_2, VAR_0, 0, 0, VAR_5, 2,
          VAR_1);
 if (VAR_4 < 0)
  FUNC_0(VAR_2, 2, "get fw error: %x\n", VAR_4);
 VAR_3 = VAR_5[0] + (VAR_5[1] << 8);
 FUNC_0(VAR_2, 2, "Get FW %x %x\n", VAR_5[0], VAR_5[1]);
 return VAR_3;
}
