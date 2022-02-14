
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {unsigned int const width; } ;
struct vimc_sca_device {unsigned int const bpp; scalar_t__ src_line_size; int * src_frame; TYPE_2__ sd; int dev; TYPE_1__ sink_fmt; } ;


 unsigned int FUNC_0 (unsigned int const,unsigned int const,unsigned int const,unsigned int const) ;
 int FUNC_1 (int ,char*,int ,unsigned int const,...) ;
 unsigned int const VAR_0 ;
 int FUNC_2 (int *,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(const struct vimc_sca_device *const VAR_1,
          const unsigned int VAR_2, const unsigned int VAR_3,
          const u8 *const VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 const u8 *VAR_8;


 VAR_7 = FUNC_0(VAR_2, VAR_3,
     VAR_1->sink_fmt.width,
     VAR_1->bpp);
 VAR_8 = &VAR_4[VAR_7];

 FUNC_1(VAR_1->dev,
  "sca: %s: --- scale_pix sink pos %dx%d, index %d ---\n",
  VAR_1->sd.name, VAR_2, VAR_3, VAR_7);




 VAR_7 = FUNC_0(VAR_2 * VAR_0, VAR_3 * VAR_0,
     VAR_1->sink_fmt.width * VAR_0, VAR_1->bpp);

 FUNC_1(VAR_1->dev, "sca: %s: scale_pix src pos %dx%d, index %d\n",
  VAR_1->sd.name, VAR_2 * VAR_0, VAR_3 * VAR_0, VAR_7);


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {



  for (VAR_6 = 0; VAR_6 < VAR_0 * VAR_1->bpp; VAR_6 += VAR_1->bpp) {
   FUNC_1(VAR_1->dev,
    "sca: %s: sca: scale_pix src pos %d\n",
    VAR_1->sd.name, VAR_7 + VAR_6);


   FUNC_2(&VAR_1->src_frame[VAR_7 + VAR_6],
       VAR_8, VAR_1->bpp);
  }


  VAR_7 += VAR_1->src_line_size;
 }
}
