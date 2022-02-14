
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct nfp_net {int rss_hfunc; int rss_cfg; int rss_key; TYPE_1__ dp; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 unsigned long FUNC_3 (unsigned long*,unsigned long) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct nfp_net*) ;
 int FUNC_6 (struct nfp_net*) ;
 int FUNC_7 (struct nfp_net*,int ) ;

__attribute__((used)) static void FUNC_8(struct nfp_net *VAR_9)
{
 unsigned long VAR_10, VAR_11;
 u32 VAR_12;


 VAR_12 = FUNC_7(VAR_9, VAR_1);
 VAR_11 = FUNC_0(VAR_2, VAR_12);
 if (!VAR_11)
  VAR_11 = FUNC_0(VAR_2,
       VAR_8);

 VAR_10 = FUNC_3(&VAR_11, VAR_4);
 if (VAR_10 == VAR_4) {
  FUNC_2(VAR_9->dp.dev,
    "Bad RSS config, defaulting to Toeplitz hash\n");
  VAR_10 = VAR_0;
 }
 VAR_9->rss_hfunc = 1 << VAR_10;

 FUNC_4(VAR_9->rss_key, FUNC_6(VAR_9));

 FUNC_5(VAR_9);


 VAR_9->rss_cfg = VAR_5 |
        VAR_6 |
        FUNC_1(VAR_3, VAR_9->rss_hfunc) |
        VAR_7;
}
