
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_spi {scalar_t__ rcount; scalar_t__ wcount; int (* get_tx ) (struct davinci_spi*) ;scalar_t__ base; int (* get_rx ) (int,struct davinci_spi*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,struct davinci_spi*) ;
 int FUNC_3 (struct davinci_spi*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct davinci_spi *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9 = 0, VAR_10;

 VAR_7 = FUNC_0(VAR_6->base + VAR_0);

 if (VAR_6->rcount > 0 && !(VAR_7 & VAR_1)) {
  VAR_6->get_rx(VAR_7 & 0xFFFF, VAR_6);
  VAR_6->rcount--;
 }

 VAR_8 = FUNC_0(VAR_6->base + VAR_4);

 if (FUNC_4(VAR_8 & VAR_5)) {
  VAR_9 = VAR_8 & VAR_5;
  goto out;
 }

 if (VAR_6->wcount > 0 && !(VAR_7 & VAR_2)) {
  VAR_10 = FUNC_0(VAR_6->base + VAR_3);
  VAR_6->wcount--;
  VAR_10 &= ~0xFFFF;
  VAR_10 |= 0xFFFF & VAR_6->get_tx(VAR_6);
  FUNC_1(VAR_10, VAR_6->base + VAR_3);
 }

out:
 return VAR_9;
}
