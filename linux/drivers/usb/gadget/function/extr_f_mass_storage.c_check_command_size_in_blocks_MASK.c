
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsg_common {TYPE_1__* curlun; int data_size_from_cmnd; } ;
typedef enum data_direction { ____Placeholder_data_direction } data_direction ;
struct TYPE_2__ {int blkbits; } ;


 int FUNC_0 (struct fsg_common*,int,int,unsigned int,int,char const*) ;

__attribute__((used)) static int FUNC_1(struct fsg_common *VAR_0,
  int VAR_1, enum data_direction VAR_2,
  unsigned int VAR_3, int VAR_4, const char *VAR_5)
{
 if (VAR_0->curlun)
  VAR_0->data_size_from_cmnd <<= VAR_0->curlun->blkbits;
 return FUNC_0(VAR_0, VAR_1, VAR_2,
   VAR_3, VAR_4, VAR_5);
}
