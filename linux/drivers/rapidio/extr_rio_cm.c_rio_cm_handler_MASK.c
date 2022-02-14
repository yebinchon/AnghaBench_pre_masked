
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_ch_chan_hdr {int ch_op; int src_ch; int dst_ch; } ;
struct cm_dev {int mport; } ;





 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,char*,int,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct cm_dev*,void*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static void FUNC_8(struct cm_dev *VAR_1, void *VAR_2)
{
 struct rio_ch_chan_hdr *VAR_3;

 if (!FUNC_2(VAR_1->mport))
  goto out;

 VAR_3 = VAR_2;

 FUNC_4(VAR_0, "OP=%x for ch=%d from %d",
      VAR_3->ch_op, FUNC_1(VAR_3->dst_ch), FUNC_1(VAR_3->src_ch));

 switch (VAR_3->ch_op) {
 case 128:
  FUNC_6(VAR_1, VAR_2);
  break;
 case 130:
  FUNC_7(VAR_2);
  break;
 case 129:
  FUNC_3(VAR_2);
  break;
 default:
  FUNC_5("Invalid packet header");
  break;
 }
out:
 FUNC_0(VAR_2);
}
