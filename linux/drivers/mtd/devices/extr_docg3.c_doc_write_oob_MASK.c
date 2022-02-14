
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mtd_oob_ops {size_t len; size_t ooblen; int mode; scalar_t__ retlen; scalar_t__ oobretlen; int ooboffs; int * datbuf; int * oobbuf; } ;
struct mtd_info {int oobsize; int oobavail; struct docg3* priv; } ;
struct docg3 {size_t oob_write_ofs; TYPE_1__* cascade; int * oob_write_buf; } ;
typedef int oob ;
typedef size_t loff_t ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct docg3*,size_t,struct mtd_oob_ops*) ;
 int FUNC_1 (char*,size_t,int,int *,size_t,int *,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mtd_oob_ops*) ;
 int FUNC_4 (struct docg3*,int ) ;
 int FUNC_5 (struct docg3*,size_t,int *,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct mtd_info *VAR_3, loff_t VAR_4,
    struct mtd_oob_ops *VAR_5)
{
 struct docg3 *VAR_6 = VAR_3->priv;
 int VAR_7, VAR_8, VAR_9;
 u8 *VAR_10 = VAR_5->oobbuf;
 u8 *VAR_11 = VAR_5->datbuf;
 size_t VAR_12, VAR_13;
 u8 VAR_14[VAR_0];

 if (VAR_11)
  VAR_12 = VAR_5->len;
 else
  VAR_12 = 0;
 if (VAR_10)
  VAR_13 = VAR_5->ooblen;
 else
  VAR_13 = 0;

 if (VAR_10 && VAR_5->mode == 129)
  VAR_10 += VAR_5->ooboffs;

 FUNC_1("doc_write_oob(from=%lld, mode=%d, data=(%p:%zu), oob=(%p:%zu))\n",
  VAR_4, VAR_5->mode, VAR_11, VAR_12, VAR_10, VAR_13);
 switch (VAR_5->mode) {
 case 129:
 case 128:
  VAR_9 = VAR_3->oobsize;
  break;
 case 130:
  VAR_9 = VAR_3->oobavail;
  break;
 default:
  return -VAR_2;
 }
 if ((VAR_12 % VAR_1) || (VAR_13 % VAR_9) ||
     (VAR_4 % VAR_1))
  return -VAR_2;
 if (VAR_12 && VAR_13 &&
     (VAR_12 / VAR_1) != (VAR_13 / VAR_9))
  return -VAR_2;

 VAR_5->oobretlen = 0;
 VAR_5->retlen = 0;
 VAR_7 = 0;
 if (VAR_12 == 0 && VAR_13 == 0)
  return -VAR_2;
 if (VAR_12 == 0 && VAR_13 > 0)
  return FUNC_0(VAR_6, VAR_4, VAR_5);

 VAR_8 = FUNC_3(VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_8(&VAR_6->cascade->lock);
 while (!VAR_7 && VAR_12 > 0) {
  FUNC_7(VAR_14, 0, sizeof(VAR_14));
  if (VAR_4 == VAR_6->oob_write_ofs)
   FUNC_6(VAR_14, VAR_6->oob_write_buf, VAR_0);
  else if (VAR_13 > 0 && VAR_5->mode == 130)
   FUNC_2(VAR_14, VAR_10);
  else if (VAR_13 > 0)
   FUNC_6(VAR_14, VAR_10, VAR_0);
  VAR_7 = FUNC_5(VAR_6, VAR_4, VAR_11, VAR_14, VAR_8);

  VAR_4 += VAR_1;
  VAR_12 -= VAR_1;
  VAR_11 += VAR_1;
  if (VAR_13) {
   VAR_10 += VAR_9;
   VAR_13 -= VAR_9;
   VAR_5->oobretlen += VAR_9;
  }
  VAR_5->retlen += VAR_1;
 }

 FUNC_4(VAR_6, 0);
 FUNC_9(&VAR_6->cascade->lock);
 return VAR_7;
}
