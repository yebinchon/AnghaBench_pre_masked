
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dmaqueue; } ;
struct iss_ipipeif_device {TYPE_1__ video_out; } ;
struct iss_buffer {int iss_addr; } ;


 int FUNC_0 (struct iss_ipipeif_device*,int ) ;
 int FUNC_1 (struct iss_ipipeif_device*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 struct iss_buffer* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct iss_ipipeif_device *VAR_0)
{
 struct iss_buffer *VAR_1;





 if (FUNC_2(&VAR_0->video_out.dmaqueue))
  return;

 FUNC_1(VAR_0, 0);

 VAR_1 = FUNC_3(&VAR_0->video_out);
 if (!VAR_1)
  return;

 FUNC_0(VAR_0, VAR_1->iss_addr);

 FUNC_1(VAR_0, 1);
}
