
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_event_buffer {unsigned int length; int buf; int dma; void* cache; struct dwc3* dwc; } ;
struct dwc3 {int sysdev; int dev; } ;


 int VAR_0 ;
 struct dwc3_event_buffer* FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (int ,unsigned int,int *,int ) ;

__attribute__((used)) static struct dwc3_event_buffer *FUNC_3(struct dwc3 *VAR_2,
  unsigned VAR_3)
{
 struct dwc3_event_buffer *VAR_4;

 VAR_4 = FUNC_1(VAR_2->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->dwc = VAR_2;
 VAR_4->length = VAR_3;
 VAR_4->cache = FUNC_1(VAR_2->dev, VAR_3, VAR_1);
 if (!VAR_4->cache)
  return FUNC_0(-VAR_0);

 VAR_4->buf = FUNC_2(VAR_2->sysdev, VAR_3,
   &VAR_4->dma, VAR_1);
 if (!VAR_4->buf)
  return FUNC_0(-VAR_0);

 return VAR_4;
}
