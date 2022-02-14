
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef unsigned int u16 ;
struct TYPE_4__ {unsigned int device_id; } ;
struct tb_switch {int generation; int dma_port; TYPE_2__ config; int safe_mode; TYPE_1__* nvm; } ;
struct TYPE_3__ {unsigned int buf_data_size; int * buf; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct tb_switch *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 const u8 *VAR_11 = VAR_8->nvm->buf;
 u16 VAR_12;
 int VAR_13;

 if (!VAR_11)
  return -VAR_2;

 VAR_9 = VAR_8->nvm->buf_data_size;
 if (VAR_9 < VAR_6 || VAR_9 > VAR_5)
  return -VAR_2;





 VAR_10 = (*(u32 *)VAR_11) & 0xffffff;
 if (VAR_10 + VAR_4 + 2 >= VAR_9)
  return -VAR_2;


 if (!FUNC_0(VAR_10, VAR_7))
  return -VAR_2;





 VAR_12 = *(u16 *)(VAR_11 + VAR_10);
 if (VAR_12 >= VAR_9)
  return -VAR_2;

 if (!VAR_8->safe_mode) {
  u16 VAR_14;





  VAR_14 = *(u16 *)(VAR_11 + VAR_10 + VAR_4);
  if (VAR_14 != VAR_8->config.device_id)
   return -VAR_2;

  if (VAR_8->generation < 3) {

   VAR_13 = FUNC_1(VAR_8->dma_port,
    VAR_0, VAR_11 + VAR_3,
    VAR_1);
   if (VAR_13)
    return VAR_13;
  }


  VAR_11 += VAR_10;
  VAR_9 -= VAR_10;
 }

 return FUNC_1(VAR_8->dma_port, 0, VAR_11, VAR_9);
}
