
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct nfp_rtsym {int dummy; } ;
struct nfp_cpp {int dummy; } ;
struct nfp_abm_link {int queue_base; int id; TYPE_2__* abm; } ;
struct TYPE_4__ {TYPE_1__* app; } ;
struct TYPE_3__ {struct nfp_cpp* cpp; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct nfp_cpp*,struct nfp_rtsym const*,int,int ,unsigned int,unsigned int*) ;
 int FUNC_1 (struct nfp_cpp*,struct nfp_rtsym const*,int,int ,unsigned int,unsigned int*) ;
 int FUNC_2 (struct nfp_cpp*,char*,int ,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_3(struct nfp_abm_link *VAR_1, const struct nfp_rtsym *VAR_2,
    unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5,
    unsigned int VAR_6, bool VAR_7, u64 *VAR_8)
{
 struct nfp_cpp *VAR_9 = VAR_1->abm->app->cpp;
 u64 VAR_10, VAR_11;
 unsigned int VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_12 = VAR_5 * VAR_0 + VAR_1->queue_base + VAR_6;

 VAR_11 = VAR_12 * VAR_3 + VAR_4;
 if (VAR_7)
  VAR_14 = FUNC_1(VAR_9, VAR_2, 3, 0, VAR_11, &VAR_10);
 else
  VAR_14 = FUNC_0(VAR_9, VAR_2, 3, 0, VAR_11, &VAR_13);
 if (VAR_14) {
  FUNC_2(VAR_9, "RED offload reading stat failed on vNIC %d band %d queue %d (+ %d)\n",
   VAR_1->id, VAR_5, VAR_6, VAR_1->queue_base);
  return VAR_14;
 }

 *VAR_8 = VAR_7 ? VAR_10 : VAR_13;
 return 0;
}
