
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ispstat_buffer {int buf_size; scalar_t__* virt_addr; } ;
struct TYPE_4__ {int name; } ;
struct ispstat {TYPE_2__ subdev; TYPE_1__* isp; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ispstat*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct ispstat*,struct ispstat_buffer*,int const,int ) ;
 int FUNC_3 (struct ispstat*,struct ispstat_buffer*,int const,int ) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ispstat *VAR_5,
        struct ispstat_buffer *VAR_6)
{
 const u32 VAR_7 = FUNC_0(VAR_5) ?
        VAR_6->buf_size + VAR_0 : VAR_6->buf_size;
 u8 *VAR_8;
 u8 *VAR_9;
 int VAR_10 = -VAR_2;

 FUNC_2(VAR_5, VAR_6, VAR_7, VAR_1);


 for (VAR_8 = VAR_6->virt_addr, VAR_9 = VAR_8 + VAR_4; VAR_8 < VAR_9; VAR_8++)
  if (FUNC_4(*VAR_8 != VAR_3))
   VAR_10 = 0;

 if (VAR_10) {
  FUNC_1(VAR_5->isp->dev,
   "%s: beginning magic check does not match.\n",
   VAR_5->subdev.name);
  return VAR_10;
 }


 for (VAR_8 = VAR_6->virt_addr + VAR_7, VAR_9 = VAR_8 + VAR_4;
      VAR_8 < VAR_9; VAR_8++) {
  if (FUNC_5(*VAR_8 != VAR_3)) {
   FUNC_1(VAR_5->isp->dev,
    "%s: ending magic check does not match.\n",
    VAR_5->subdev.name);
   return -VAR_2;
  }
 }

 FUNC_3(VAR_5, VAR_6, VAR_7,
        VAR_1);

 return 0;
}
