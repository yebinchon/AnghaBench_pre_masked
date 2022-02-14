
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct f_audio {int cs; } ;
struct TYPE_6__ {int control; int list; } ;
struct TYPE_5__ {int list; } ;
struct TYPE_4__ {int* data; int list; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int FUNC_2(struct f_audio *VAR_7)
{
 FUNC_0(&VAR_7->cs);
 FUNC_1(&VAR_4.list, &VAR_7->cs);

 FUNC_0(&VAR_4.control);
 FUNC_1(&VAR_5.list, &VAR_4.control);
 FUNC_1(&VAR_6.list, &VAR_4.control);

 VAR_6.data[VAR_0] = 0xffc0;
 VAR_6.data[VAR_2] = 0xe3a0;
 VAR_6.data[VAR_1] = 0xfff0;
 VAR_6.data[VAR_3] = 0x0030;

 return 0;
}
