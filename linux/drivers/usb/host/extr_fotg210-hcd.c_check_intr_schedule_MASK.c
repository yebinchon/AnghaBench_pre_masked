
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fotg210_qh {unsigned int gap_uf; scalar_t__ c_usecs; int period; int dev; scalar_t__ usecs; } ;
struct fotg210_hcd {int dummy; } ;
typedef int __hc32 ;


 int VAR_0 ;
 int FUNC_0 (struct fotg210_hcd*,unsigned int,unsigned int,int ,scalar_t__) ;
 int FUNC_1 (struct fotg210_hcd*,int) ;
 scalar_t__ FUNC_2 (struct fotg210_hcd*,int ,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(struct fotg210_hcd *VAR_1, unsigned VAR_2,
  unsigned VAR_3, const struct fotg210_qh *VAR_4, __hc32 *VAR_5)
{
 int VAR_6 = -VAR_0;
 u8 VAR_7 = 0;

 if (VAR_4->c_usecs && VAR_3 >= 6)
  goto done;

 if (!FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4->period, VAR_4->usecs))
  goto done;
 if (!VAR_4->c_usecs) {
  VAR_6 = 0;
  *VAR_5 = 0;
  goto done;
 }
 VAR_7 = 0x03 << (VAR_3 + VAR_4->gap_uf);
 *VAR_5 = FUNC_1(VAR_1, VAR_7 << 8);

 VAR_7 |= 1 << VAR_3;
 if (FUNC_2(VAR_1, VAR_4->period, VAR_4->dev, VAR_2, VAR_7)) {
  if (!FUNC_0(VAR_1, VAR_2, VAR_3 + VAR_4->gap_uf + 1,
    VAR_4->period, VAR_4->c_usecs))
   goto done;
  if (!FUNC_0(VAR_1, VAR_2, VAR_3 + VAR_4->gap_uf,
    VAR_4->period, VAR_4->c_usecs))
   goto done;
  VAR_6 = 0;
 }
done:
 return VAR_6;
}
