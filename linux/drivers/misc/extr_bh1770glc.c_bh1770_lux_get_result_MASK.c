
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bh1770_chip {int lux_data_raw; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct bh1770_chip *VAR_2)
{
 u16 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->client, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = VAR_4 & 0xff;
 VAR_4 = FUNC_0(VAR_2->client, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->lux_data_raw = VAR_3 | ((VAR_4 & 0xff) << 8);

 return 0;
}
