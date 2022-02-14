
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct spinand_device {void* oobbuf; void* databuf; TYPE_1__* dirmaps; } ;
struct spi_mem_dirmap_desc {int dummy; } ;
struct TYPE_8__ {int in; } ;
struct TYPE_7__ {int in; } ;
struct TYPE_6__ {size_t plane; } ;
struct nand_page_io_req {int dataoffs; scalar_t__ mode; scalar_t__ ooblen; int ooboffs; TYPE_4__ oobbuf; scalar_t__ datalen; TYPE_3__ databuf; TYPE_2__ pos; } ;
struct nand_device {int dummy; } ;
struct mtd_info {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {struct spi_mem_dirmap_desc* rdesc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,void*,scalar_t__) ;
 int FUNC_1 (struct mtd_info*,int ,void*,int ,scalar_t__) ;
 void* FUNC_2 (struct nand_device*) ;
 scalar_t__ FUNC_3 (struct nand_device*) ;
 struct mtd_info* FUNC_4 (struct nand_device*) ;
 int FUNC_5 (struct spi_mem_dirmap_desc*,int,unsigned int,void*) ;
 struct nand_device* FUNC_6 (struct spinand_device*) ;

__attribute__((used)) static int FUNC_7(struct spinand_device *VAR_2,
          const struct nand_page_io_req *VAR_3)
{
 struct nand_device *VAR_4 = FUNC_6(VAR_2);
 struct mtd_info *VAR_5 = FUNC_4(VAR_4);
 struct spi_mem_dirmap_desc *VAR_6;
 unsigned int VAR_7 = 0;
 void *VAR_8 = ((void*)0);
 u16 VAR_9 = 0;
 ssize_t VAR_10;

 if (VAR_3->datalen) {
  VAR_8 = VAR_2->databuf;
  VAR_7 = FUNC_2(VAR_4);
  VAR_9 = 0;
 }

 if (VAR_3->ooblen) {
  VAR_7 += FUNC_3(VAR_4);
  if (!VAR_8) {
   VAR_8 = VAR_2->oobbuf;
   VAR_9 = FUNC_2(VAR_4);
  }
 }

 VAR_6 = VAR_2->dirmaps[VAR_3->pos.plane].rdesc;

 while (VAR_7) {
  VAR_10 = FUNC_5(VAR_6, VAR_9, VAR_7, VAR_8);
  if (VAR_10 < 0)
   return VAR_10;

  if (!VAR_10 || VAR_10 > VAR_7)
   return -VAR_0;

  VAR_7 -= VAR_10;
  VAR_9 += VAR_10;
  VAR_8 += VAR_10;
 }

 if (VAR_3->datalen)
  FUNC_0(VAR_3->databuf.in, VAR_2->databuf + VAR_3->dataoffs,
         VAR_3->datalen);

 if (VAR_3->ooblen) {
  if (VAR_3->mode == VAR_1)
   FUNC_1(VAR_5, VAR_3->oobbuf.in,
          VAR_2->oobbuf,
          VAR_3->ooboffs,
          VAR_3->ooblen);
  else
   FUNC_0(VAR_3->oobbuf.in, VAR_2->oobbuf + VAR_3->ooboffs,
          VAR_3->ooblen);
 }

 return 0;
}
