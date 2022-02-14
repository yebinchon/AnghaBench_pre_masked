
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {char* name; } ;
struct msp_state {scalar_t__ opmode; int mode; int rxsubchans; char const* audmode; char const* acb; int route_out; int route_in; int std; int hdl; int rev2; int rev1; } ;
struct i2c_client {int dev; int name; } ;
typedef int prefix ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,char const*,...) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,char*) ;
 struct msp_state* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int *,char*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_6)
{
 struct msp_state *VAR_7 = FUNC_4(VAR_6);
 struct i2c_client *VAR_8 = FUNC_6(VAR_6);
 const char *VAR_9;
 char VAR_10[VAR_3 + 20];

 if (VAR_7->opmode == VAR_1)
  FUNC_1(VAR_8);
 FUNC_0(&VAR_8->dev, "%s rev1 = 0x%04x rev2 = 0x%04x\n",
   VAR_8->name, VAR_7->rev1, VAR_7->rev2);
 FUNC_3(VAR_10, sizeof(VAR_10), "%s: Audio:    ", VAR_6->name);
 FUNC_5(&VAR_7->hdl, VAR_10);
 switch (VAR_7->mode) {
  case 136: VAR_9 = "AM (for carrier detect)"; break;
  case 130: VAR_9 = "FM Radio"; break;
  case 128: VAR_9 = "Terrestrial FM-mono/stereo"; break;
  case 129: VAR_9 = "Satellite FM-mono"; break;
  case 132: VAR_9 = "NICAM/FM (B/G, D/K)"; break;
  case 131: VAR_9 = "NICAM/FM (I)"; break;
  case 135: VAR_9 = "NICAM/AM (L)"; break;
  case 134: VAR_9 = "BTSC"; break;
  case 133: VAR_9 = "External input"; break;
  default: VAR_9 = "unknown"; break;
 }
 if (VAR_7->mode == 133) {
  FUNC_0(&VAR_8->dev, "Mode:     %s\n", VAR_9);
 } else if (VAR_7->opmode == VAR_2) {
  FUNC_0(&VAR_8->dev, "Mode:     %s (%s%s)\n", VAR_9,
    (VAR_7->rxsubchans & VAR_5) ? "stereo" : "mono",
    (VAR_7->rxsubchans & VAR_4) ? ", dual" : "");
 } else {
  if (VAR_7->opmode == VAR_0)
   FUNC_0(&VAR_8->dev, "Mode:     %s\n", VAR_9);
  FUNC_0(&VAR_8->dev, "Standard: %s (%s%s)\n",
    FUNC_2(VAR_7->std),
    (VAR_7->rxsubchans & VAR_5) ? "stereo" : "mono",
    (VAR_7->rxsubchans & VAR_4) ? ", dual" : "");
 }
 FUNC_0(&VAR_8->dev, "Audmode:  0x%04x\n", VAR_7->audmode);
 FUNC_0(&VAR_8->dev, "Routing:  0x%08x (input) 0x%08x (output)\n",
   VAR_7->route_in, VAR_7->route_out);
 FUNC_0(&VAR_8->dev, "ACB:      0x%04x\n", VAR_7->acb);
 return 0;
}
