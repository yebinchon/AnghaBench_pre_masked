
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5523 {int rxbufsz; } ;
typedef int rxsize ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar5523*,char*,int ) ;
 int FUNC_1 (struct ar5523*,char*,...) ;
 int FUNC_2 (struct ar5523*,int ,int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ar5523 *VAR_2)
{
 int VAR_3;
 __be32 VAR_4;


 VAR_3 = FUNC_2(VAR_2, VAR_1, &VAR_4,
      sizeof(VAR_4));
 if (VAR_3 != 0) {
  FUNC_1(VAR_2, "could not read max RX size\n");
  return VAR_3;
 }

 VAR_2->rxbufsz = FUNC_3(VAR_4);

 if (!VAR_2->rxbufsz || VAR_2->rxbufsz > VAR_0) {
  FUNC_1(VAR_2, "Bad rxbufsz from device. Using %d instead\n",
      VAR_0);
  VAR_2->rxbufsz = VAR_0;
 }

 FUNC_0(VAR_2, "Max RX buf size: %d\n", VAR_2->rxbufsz);
 return 0;
}
