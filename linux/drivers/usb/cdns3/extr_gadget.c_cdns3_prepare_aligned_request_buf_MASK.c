
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ length; scalar_t__ buf; } ;
struct cdns3_request {int flags; TYPE_1__ request; struct cdns3_aligned_buf* aligned_buf; struct cdns3_endpoint* priv_ep; } ;
struct cdns3_endpoint {scalar_t__ dir; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {int aligned_buf_list; int aligned_buf_wq; int sysdev; } ;
struct cdns3_aligned_buf {scalar_t__ size; int in_use; int buf; int list; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int *,int ) ;
 int FUNC_1 (struct cdns3_aligned_buf*) ;
 struct cdns3_aligned_buf* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 int VAR_4 ;
 int FUNC_6 (struct cdns3_request*) ;
 int FUNC_7 (struct cdns3_request*) ;

__attribute__((used)) static int FUNC_8(struct cdns3_request *VAR_5)
{
 struct cdns3_endpoint *VAR_6 = VAR_5->priv_ep;
 struct cdns3_device *VAR_7 = VAR_6->cdns3_dev;
 struct cdns3_aligned_buf *VAR_8;


 if (!((uintptr_t)VAR_5->request.buf & 0x7))
  return 0;

 VAR_8 = VAR_5->aligned_buf;

 if (!VAR_8 || VAR_5->request.length > VAR_8->size) {
  VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   return -VAR_0;

  VAR_8->size = VAR_5->request.length;

  VAR_8->buf = FUNC_0(VAR_7->sysdev,
           VAR_8->size,
           &VAR_8->dma,
           VAR_1);
  if (!VAR_8->buf) {
   FUNC_1(VAR_8);
   return -VAR_0;
  }

  if (VAR_5->aligned_buf) {
   FUNC_6(VAR_5);
   VAR_5->aligned_buf->in_use = 0;
   FUNC_5(VAR_4,
       &VAR_7->aligned_buf_wq);
  }

  VAR_8->in_use = 1;
  VAR_5->aligned_buf = VAR_8;

  FUNC_3(&VAR_8->list,
         &VAR_7->aligned_buf_list);
 }

 if (VAR_6->dir == VAR_3) {
  FUNC_4(VAR_8->buf, VAR_5->request.buf,
         VAR_5->request.length);
 }

 VAR_5->flags |= VAR_2;
 FUNC_7(VAR_5);

 return 0;
}
