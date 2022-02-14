
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta2x11_vip {unsigned int input; int decoder; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,unsigned int,int ,int ) ;
 int VAR_2 ;
 struct sta2x11_vip* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct sta2x11_vip *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 if (VAR_5 > 1)
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_6->decoder, VAR_2, VAR_1, VAR_5, 0, 0);

 if (!VAR_7)
  VAR_6->input = VAR_5;

 return 0;
}
