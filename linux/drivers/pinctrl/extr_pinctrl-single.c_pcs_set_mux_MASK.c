
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct pcs_function {int nvals; struct pcs_func_vals* vals; int name; } ;
struct pcs_func_vals {unsigned int mask; unsigned int val; int reg; } ;
struct pcs_device {unsigned int fmask; unsigned int (* read ) (int ) ;int lock; int (* write ) (unsigned int,int ) ;scalar_t__ bits_per_mux; int dev; } ;
struct function_desc {struct pcs_function* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,unsigned int) ;
 struct pcs_device* FUNC_1 (struct pinctrl_dev*) ;
 struct function_desc* FUNC_2 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_7(struct pinctrl_dev *VAR_1, unsigned VAR_2,
 unsigned VAR_3)
{
 struct pcs_device *VAR_4;
 struct function_desc *VAR_5;
 struct pcs_function *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4->fmask)
  return 0;
 VAR_5 = FUNC_2(VAR_1, VAR_2);
 VAR_6 = VAR_5->data;
 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_4->dev, "enabling %s function%i\n",
  VAR_6->name, VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_6->nvals; VAR_7++) {
  struct pcs_func_vals *VAR_8;
  unsigned long VAR_9;
  unsigned VAR_10, VAR_11;

  VAR_8 = &VAR_6->vals[VAR_7];
  FUNC_3(&VAR_4->lock, VAR_9);
  VAR_10 = VAR_4->read(VAR_8->reg);

  if (VAR_4->bits_per_mux)
   VAR_11 = VAR_8->mask;
  else
   VAR_11 = VAR_4->fmask;

  VAR_10 &= ~VAR_11;
  VAR_10 |= (VAR_8->val & VAR_11);
  VAR_4->write(VAR_10, VAR_8->reg);
  FUNC_4(&VAR_4->lock, VAR_9);
 }

 return 0;
}
