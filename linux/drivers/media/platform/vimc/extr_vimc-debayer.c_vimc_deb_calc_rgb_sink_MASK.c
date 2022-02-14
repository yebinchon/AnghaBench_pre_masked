
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {unsigned int height; unsigned int width; } ;
struct vimc_deb_device {TYPE_3__ sd; int dev; int sink_bpp; TYPE_2__ sink_fmt; TYPE_1__* sink_pix_map; } ;
typedef enum vimc_deb_rgb_colors { ____Placeholder_vimc_deb_rgb_colors } vimc_deb_rgb_colors ;
struct TYPE_4__ {int** order; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int,unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,unsigned int const,unsigned int const,...) ;
 unsigned int FUNC_2 (int const*,int ) ;

__attribute__((used)) static void FUNC_3(struct vimc_deb_device *VAR_1,
       const u8 *VAR_2,
       const unsigned int VAR_3,
       const unsigned int VAR_4,
       unsigned int VAR_5[3])
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10[3] = {0, 0, 0};

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++)
  VAR_5[VAR_6] = 0;






 VAR_7 = VAR_0 / 2;



 FUNC_1(VAR_1->dev,
  "deb: %s: --- Calc pixel %dx%d, window mean %d, seek %d ---\n",
  VAR_1->sd.name, VAR_3, VAR_4, VAR_1->sink_fmt.height, VAR_7);







 for (VAR_8 = VAR_7 > VAR_3 ? 0 : VAR_3 - VAR_7;
      VAR_8 < VAR_3 + VAR_7 + 1 && VAR_8 < VAR_1->sink_fmt.height;
      VAR_8++) {







  for (VAR_9 = VAR_7 > VAR_4 ? 0 : VAR_4 - VAR_7;
       VAR_9 < VAR_4 + VAR_7 + 1 && VAR_9 < VAR_1->sink_fmt.width;
       VAR_9++) {
   enum vimc_deb_rgb_colors VAR_11;
   unsigned int VAR_12;


   VAR_11 = VAR_1->sink_pix_map->order[VAR_8 % 2][VAR_9 % 2];

   VAR_12 = FUNC_0(VAR_8, VAR_9,
       VAR_1->sink_fmt.width,
       VAR_1->sink_bpp);

   FUNC_1(VAR_1->dev,
    "deb: %s: RGB CALC: frame index %d, win pos %dx%d, color %d\n",
    VAR_1->sd.name, VAR_12, VAR_8, VAR_9, VAR_11);


   VAR_5[VAR_11] = VAR_5[VAR_11] +
    FUNC_2(&VAR_2[VAR_12], VAR_1->sink_bpp);


   VAR_10[VAR_11]++;

   FUNC_1(VAR_1->dev, "deb: %s: RGB CALC: val %d, n %d\n",
    VAR_1->sd.name, VAR_5[VAR_11], VAR_10[VAR_11]);
  }
 }


 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  FUNC_1(VAR_1->dev,
   "deb: %s: PRE CALC: %dx%d Color %d, val %d, n %d\n",
   VAR_1->sd.name, VAR_3, VAR_4, VAR_6, VAR_5[VAR_6], VAR_10[VAR_6]);

  if (VAR_10[VAR_6])
   VAR_5[VAR_6] = VAR_5[VAR_6] / VAR_10[VAR_6];

  FUNC_1(VAR_1->dev,
   "deb: %s: FINAL CALC: %dx%d Color %d, val %d\n",
   VAR_1->sd.name, VAR_3, VAR_4, VAR_6, VAR_5[VAR_6]);
 }
}
