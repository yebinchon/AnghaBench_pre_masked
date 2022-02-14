
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rx8025_data {int ctrl1; int client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 struct rx8025_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ,int,int*) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6)
{
 struct rx8025_data *VAR_7 = FUNC_1(VAR_6);
 u8 VAR_8[2], VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_7->client, VAR_4, 2, VAR_8);
 if (VAR_11)
  goto out;


 VAR_7->ctrl1 = VAR_8[0] & ~VAR_0;

 if (VAR_8[1] & (VAR_2 | VAR_3)) {
  FUNC_0(&VAR_6->dev, "Alarm was detected\n");
  VAR_10 = 1;
 }

 if (VAR_8[1] & VAR_1)
  VAR_10 = 1;

 if (VAR_10) {
  VAR_9 = VAR_8[1];
  VAR_9 &= ~(VAR_1 | VAR_3 |
      VAR_2);

  VAR_11 = FUNC_3(VAR_6, VAR_5, VAR_9);
 }
out:
 return VAR_11;
}
