
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fbtft_ops {scalar_t__ set_gamma; scalar_t__ set_var; scalar_t__ unregister_backlight; scalar_t__ register_backlight; scalar_t__ verify_gpios; scalar_t__ request_gpios; scalar_t__ request_gpios_match; scalar_t__ blank; scalar_t__ init_display; scalar_t__ update_display; scalar_t__ mkdirty; scalar_t__ reset; scalar_t__ set_addr_win; scalar_t__ write_register; scalar_t__ write_vmem; scalar_t__ read; scalar_t__ write; } ;



__attribute__((used)) static void FUNC_0(struct fbtft_ops *VAR_0, struct fbtft_ops *VAR_1)
{
 if (VAR_1->write)
  VAR_0->write = VAR_1->write;
 if (VAR_1->read)
  VAR_0->read = VAR_1->read;
 if (VAR_1->write_vmem)
  VAR_0->write_vmem = VAR_1->write_vmem;
 if (VAR_1->write_register)
  VAR_0->write_register = VAR_1->write_register;
 if (VAR_1->set_addr_win)
  VAR_0->set_addr_win = VAR_1->set_addr_win;
 if (VAR_1->reset)
  VAR_0->reset = VAR_1->reset;
 if (VAR_1->mkdirty)
  VAR_0->mkdirty = VAR_1->mkdirty;
 if (VAR_1->update_display)
  VAR_0->update_display = VAR_1->update_display;
 if (VAR_1->init_display)
  VAR_0->init_display = VAR_1->init_display;
 if (VAR_1->blank)
  VAR_0->blank = VAR_1->blank;
 if (VAR_1->request_gpios_match)
  VAR_0->request_gpios_match = VAR_1->request_gpios_match;
 if (VAR_1->request_gpios)
  VAR_0->request_gpios = VAR_1->request_gpios;
 if (VAR_1->verify_gpios)
  VAR_0->verify_gpios = VAR_1->verify_gpios;
 if (VAR_1->register_backlight)
  VAR_0->register_backlight = VAR_1->register_backlight;
 if (VAR_1->unregister_backlight)
  VAR_0->unregister_backlight = VAR_1->unregister_backlight;
 if (VAR_1->set_var)
  VAR_0->set_var = VAR_1->set_var;
 if (VAR_1->set_gamma)
  VAR_0->set_gamma = VAR_1->set_gamma;
}
