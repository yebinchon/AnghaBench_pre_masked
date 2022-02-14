
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct otpc_priv {scalar_t__ base; TYPE_2__* map; int dev; TYPE_1__* config; } ;
struct TYPE_4__ {int otpc_row_size; scalar_t__* data_r_offset; } ;
struct TYPE_3__ {unsigned int word_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(void *VAR_3, unsigned int VAR_4, void *VAR_5,
 size_t VAR_6)
{
 struct otpc_priv *VAR_7 = VAR_3;
 u32 *VAR_8 = VAR_5;
 u32 VAR_9;
 u32 VAR_10 = VAR_4 / VAR_7->config->word_size;
 int VAR_11, VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_6;) {
  FUNC_4(VAR_7->base, VAR_1);
  FUNC_5(VAR_7->base, VAR_10++);
  FUNC_6(VAR_7->base);
  VAR_12 = FUNC_1(VAR_7->base, VAR_2);
  if (VAR_12) {
   FUNC_0(VAR_7->dev, "otp read error: 0x%x", VAR_12);
   return -VAR_0;
  }

  for (VAR_11 = 0; VAR_11 < VAR_7->map->otpc_row_size; VAR_11++) {
   *VAR_8++ = FUNC_2(VAR_7->base +
     VAR_7->map->data_r_offset[VAR_11]);
   VAR_9 += sizeof(*VAR_8);
  }

  FUNC_3(VAR_7->base);
 }

 return 0;
}
