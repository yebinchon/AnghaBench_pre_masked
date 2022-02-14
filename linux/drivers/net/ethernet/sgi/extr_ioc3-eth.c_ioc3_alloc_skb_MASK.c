
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ioc3_private {int dma_dev; } ;
struct ioc3_erxbuf {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned long) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static inline int FUNC_6(struct ioc3_private *VAR_6, struct sk_buff **VAR_7,
     struct ioc3_erxbuf **VAR_8, dma_addr_t *VAR_9)
{
 struct sk_buff *VAR_10;
 dma_addr_t VAR_11;
 int VAR_12;

 VAR_10 = FUNC_1(VAR_4 + VAR_3 - 1, VAR_2);
 if (!VAR_10)
  return -VAR_1;


 VAR_12 = FUNC_0((unsigned long)VAR_10->data);
 if (VAR_12)
  FUNC_5(VAR_10, VAR_12);

 VAR_11 = FUNC_3(VAR_6->dma_dev, VAR_10->data,
      VAR_4, VAR_0);

 if (FUNC_4(VAR_6->dma_dev, VAR_11)) {
  FUNC_2(VAR_10);
  return -VAR_1;
 }
 *VAR_9 = VAR_11;
 *VAR_8 = (struct ioc3_erxbuf *)VAR_10->data;
 FUNC_5(VAR_10, VAR_5);
 *VAR_7 = VAR_10;

 return 0;
}
