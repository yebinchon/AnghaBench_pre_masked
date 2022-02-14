
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct snd_queue {int xdp_free_cnt; int xdp_desc_cnt; } ;
struct nicvf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_queue*,int) ;
 int FUNC_1 (struct snd_queue*,int) ;
 int FUNC_2 (struct snd_queue*,int,int ,int ) ;
 int FUNC_3 (struct snd_queue*,int,int,int ,int ) ;

int FUNC_4(struct nicvf *VAR_1, struct snd_queue *VAR_2,
       u64 VAR_3, u64 VAR_4, u16 VAR_5)
{
 int VAR_6 = VAR_0;
 int VAR_7;

 if (VAR_6 > VAR_2->xdp_free_cnt)
  return 0;

 VAR_7 = FUNC_1(VAR_2, VAR_6);

 FUNC_3(VAR_2, VAR_7, VAR_6 - 1, VAR_3, VAR_5);

 VAR_7 = FUNC_0(VAR_2, VAR_7);
 FUNC_2(VAR_2, VAR_7, VAR_5, VAR_4);

 VAR_2->xdp_desc_cnt += VAR_6;

 return 1;
}
