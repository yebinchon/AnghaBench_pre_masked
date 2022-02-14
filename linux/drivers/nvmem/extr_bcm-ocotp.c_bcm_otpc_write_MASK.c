
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct otpc_priv {scalar_t__ base; int dev; TYPE_2__* map; TYPE_1__* config; } ;
struct TYPE_4__ {int otpc_row_size; scalar_t__* data_w_offset; } ;
struct TYPE_3__ {unsigned int word_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_9(void *VAR_4, unsigned int VAR_5, void *VAR_6,
 size_t VAR_7)
{
 struct otpc_priv *VAR_8 = VAR_4;
 u32 *VAR_9 = VAR_6;
 u32 VAR_10;
 u32 VAR_11 = VAR_5 / VAR_8->config->word_size;
 int VAR_12, VAR_13;

 if (VAR_5 % VAR_8->config->word_size)
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_8->base);
 if (VAR_13)
  return -VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_7;) {
  FUNC_5(VAR_8->base, VAR_2);
  FUNC_6(VAR_8->base, VAR_11++);
  for (VAR_12 = 0; VAR_12 < VAR_8->map->otpc_row_size; VAR_12++) {
   FUNC_8(*VAR_9, VAR_8->base + VAR_8->map->data_w_offset[VAR_12]);
   VAR_9++;
   VAR_10 += sizeof(*VAR_9);
  }
  FUNC_7(VAR_8->base);
  VAR_13 = FUNC_3(VAR_8->base, VAR_3);
  FUNC_4(VAR_8->base);
  if (VAR_13) {
   FUNC_0(VAR_8->dev, "otp write error: 0x%x", VAR_13);
   return -VAR_1;
  }
 }

 FUNC_1(VAR_8->base);

 return 0;
}
