
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int main; int second; scalar_t__ mode; } ;
struct i2c_client {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int,int ,char*,int,int) ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_4 ;
 struct msp_state* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_5)
{
 struct msp_state *VAR_6 = FUNC_2(FUNC_1(VAR_5));

 if (VAR_6->main == VAR_6->second)
  FUNC_0(&VAR_5->dev, 1, VAR_4,
   "mono sound carrier: %d.%03d MHz\n",
   VAR_6->main / 910000, (VAR_6->main / 910) % 1000);
 else
  FUNC_0(&VAR_5->dev, 1, VAR_4,
   "main sound carrier: %d.%03d MHz\n",
   VAR_6->main / 910000, (VAR_6->main / 910) % 1000);
 if (VAR_6->mode == VAR_1 || VAR_6->mode == VAR_2)
  FUNC_0(&VAR_5->dev, 1, VAR_4,
   "NICAM/FM carrier  : %d.%03d MHz\n",
   VAR_6->second / 910000, (VAR_6->second/910) % 1000);
 if (VAR_6->mode == VAR_0)
  FUNC_0(&VAR_5->dev, 1, VAR_4,
   "NICAM/AM carrier  : %d.%03d MHz\n",
   VAR_6->second / 910000, (VAR_6->second / 910) % 1000);
 if (VAR_6->mode == VAR_3 && VAR_6->main != VAR_6->second) {
  FUNC_0(&VAR_5->dev, 1, VAR_4,
   "FM-stereo carrier : %d.%03d MHz\n",
   VAR_6->second / 910000, (VAR_6->second / 910) % 1000);
 }
}
